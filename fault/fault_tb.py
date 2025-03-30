import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def enhanced_fault_test(dut):
    """Testbench with complete fault diagnosis including 1100 test case"""
    # Test vectors: (a,b,c,d), expected_x
    test_vectors = [
        ((0, 0, 0, 0), 1),  # Tests a,b,c stuck-at-1, AND gate, x stuck-at-0
        ((1, 0, 0, 0), 0),  # Tests a stuck-at-0, b stuck-at-1, NOT-a, x stuck-at-1
        ((1, 1, 0, 0), 1),  # Tests a/b stuck-at-0, c stuck-at-1, AND gate, x stuck-at-0
        ((1, 1, 1, 0), 0),  # Tests d stuck-at-1, c stuck-at-0, OR gate, x stuck-at-1
        ((1, 1, 1, 1), 1)   # Tests x stuck-at-0, AND gate, a/b/d stuck-at-0
    ]

    # Complete fault mapping including 1100 case
    fault_db = {
        '0000': [
            "a stuck-at-1",
            "b stuck-at-1", 
            "c stuck-at-1",
            "AND gate faulty",
            "x stuck-at-0"
        ],
        '1000': [
            "a stuck-at-0",
            "b stuck-at-1",
            "NOT-a gate faulty",
            "x stuck-at-1"
        ],
        '1100': [ 
            "a stuck-at-0",
            "b stuck-at-0",
            "c stuck-at-1",
            "AND gate faulty",
            "x stuck-at-0"
        ],
        '1110': [
            "d stuck-at-1",
            "c stuck-at-0",
            "OR gate faulty",
            "x stuck-at-1"
        ],
        '1111': [
            "x stuck-at-0",
            "AND gate faulty",
            "a stuck-at-0",
            "b stuck-at-0",
            "d stuck-at-0"
        ]
    }

    failures = []
    print("\nRunning enhanced fault test...")
    print("Input | Expected X | Actual X")
    print("----------------------------")
    for inputs, expected_x in test_vectors:
        a, b, c, d = inputs
        input_str = f"{a}{b}{c}{d}"
        dut.a.value = a
        dut.b.value = b
        dut.c.value = c
        dut.d.value = d
        
        await Timer(10, units="ns")
        
        actual_x = int(dut.x.value)
        print(f"{input_str}  |     {expected_x}     |    {actual_x}")
        
        if actual_x != expected_x:
            failures.append((input_str, fault_db[input_str]))

    # Print detailed fault report
    print("\n=== FAULT ANALYSIS REPORT ===")
    if not failures:
        print("All tests passed - no faults detected!")
    else:
        print(f"detected {len(failures)} failing test case(s):")
        for input_str, possible_faults in failures:
            print(f"\nFailure for input {input_str}:")
            print("Possible root causes:")
            for fault in possible_faults:
                print(f"  • {fault}")