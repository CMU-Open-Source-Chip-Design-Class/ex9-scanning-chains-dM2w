import cocotb
from cocotb.triggers import Timer
from cocotb.result import TestFailure

# Test vectors with all expected values
test_vectors = [
    # a, b, c, d | na, nc, A1, A2, x
    (0, 0, 0, 0, 1, 1, 1, 1, 1),
    (0, 0, 1, 0, 1, 0, 1, 0, 0),
    (0, 1, 0, 0, 1, 1, 0, 1, 0),
    (1, 0, 0, 0, 0, 1, 0, 1, 0),
    (1, 0, 1, 0, 0, 0, 0, 0, 0),
    (1, 1, 1, 1, 0, 0, 1, 1, 1)
]

@cocotb.test()
async def test_detailed_fault_analysis(dut):
    """Test with complete signal visibility for debugging"""
    for vec_idx, (a, b, c, d, exp_na, exp_nc, exp_A1, exp_A2, exp_x) in enumerate(test_vectors):
        dut.a.value = a
        dut.b.value = b
        dut.c.value = c
        dut.d.value = d
        await Timer(10, units="ns")
        
        # read all actual values
        actual_a = int(dut.a.value)
        actual_b = int(dut.b.value)
        actual_c = int(dut.c.value)
        actual_d = int(dut.d.value)
        actual_na = int(dut.na.value) if hasattr(dut, 'na') else (~actual_a & 1)
        actual_nc = int(dut.nc.value) if hasattr(dut, 'nc') else (~actual_c & 1)
        actual_A1 = int(dut.A1.value) if hasattr(dut, 'A1') else (actual_na ^ actual_b)
        actual_A2 = int(dut.A2.value) if hasattr(dut, 'A2') else (actual_nc | actual_d)
        actual_x = int(dut.x.value)
        
        dut._log.info(f"\n=== Test {vec_idx+1} ===")
        dut._log.info(f"Inputs: a={a}, b={b}, c={c}, d={d}")
        
        dut._log.info("Signal | Expected | Actual | Status")
        dut._log.info("-------|----------|--------|-------")
        dut._log.info(f"na     | {exp_na:^8} | {actual_na:^6} | {'OK' if actual_na == exp_na else 'FAIL'}")
        dut._log.info(f"nc     | {exp_nc:^8} | {actual_nc:^6} | {'OK' if actual_nc == exp_nc else 'FAIL'}")
        dut._log.info(f"A1     | {exp_A1:^8} | {actual_A1:^6} | {'OK' if actual_A1 == exp_A1 else 'FAIL'}")
        dut._log.info(f"A2     | {exp_A2:^8} | {actual_A2:^6} | {'OK' if actual_A2 == exp_A2 else 'FAIL'}")
        dut._log.info(f"x      | {exp_x:^8} | {actual_x:^6} | {'OK' if actual_x == exp_x else 'FAIL'}")
        

