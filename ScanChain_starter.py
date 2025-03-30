import copy
import cocotb
from cocotb.triggers import Timer


# Make sure to set FILE_NAME
# to the filepath of the .log
# file you are working with
CHAIN_LENGTH = -1
FILE_NAME    = "hidden_fsm/hidden_fsm.log"



# Holds information about a register
# in your design.

################
# DO NOT EDIT!!!
################
class Register:

    def __init__(self, name) -> None:
        self.name = name            # Name of register, as in .log file
        self.size = -1              # Number of bits in register

        self.bit_list = list()      # Set this to the register's contents, if you want to
        self.index_list = list()    # List of bit mappings into chain. See handout

        self.first = -1             # LSB mapping into scan chain
        self.last  = -1             # MSB mapping into scan chain


# Holds information about the scan chain
# in your design.
        
################
# DO NOT EDIT!!!
################
class ScanChain:

    def __init__(self) -> None:
        self.registers = dict()     # Dictionary of Register objects, indexed by 
                                    # register name
        
        self.chain_length = 0       # Number of FFs in chain


# Sets up a new ScanChain object
# and returns it

################     
# DO NOT EDIT!!!
################
def setup_chain(filename):

    scan_chain = ScanChain()

    f = open(filename, "r")
    for line in f:
        linelist = line.split()
        index, name, bit = linelist[0], linelist[1], linelist[2]

        if name not in scan_chain.registers:
            reg = Register(name)
            reg.index_list.append((int(bit), int(index)))
            scan_chain.registers[name] = reg

        else:
            scan_chain.registers[name].index_list.append((int(bit), int(index)))
        
    f.close()

    for name in scan_chain.registers:
        cur_reg = scan_chain.registers[name]
        cur_reg.index_list.sort()
        new_list = list()
        for tuple in cur_reg.index_list:
            new_list.append(tuple[1])
        
        cur_reg.index_list = new_list
        cur_reg.bit_list   = [0] * len(new_list)
        cur_reg.size = len(new_list)
        cur_reg.first = new_list[0]
        cur_reg.last  = new_list[-1]
        scan_chain.chain_length += len(cur_reg.index_list)

    return scan_chain


# Prints info of given Register object

################
# DO NOT EDIT!!!
################
def print_register(reg):
    print("------------------")
    print(f"NAME:    {reg.name}")
    print(f"BITS:    {reg.bit_list}")
    print(f"INDICES: {reg.index_list}")
    print("------------------")


# Prints info of given ScanChain object

################   
# DO NOT EDIT!!!
################
def print_chain(chain):
    print("---CHAIN DISPLAY---\n")
    print(f"CHAIN SIZE: {chain.chain_length}\n")
    print("REGISTERS: \n")
    for name in chain.registers:
        cur_reg = chain.registers[name]
        print_register(cur_reg)



#-------------------------------------------------------------------

# This function steps the clock once.
    
# Hint: Use the Timer() builtin function
async def step_clock(dut):

    ######################
    # TODO: YOUR CODE HERE 
    ######################

    dut.clk.value = 1
    await Timer(10, units='ns')
    dut.clk.value = 0
    await Timer(10, units='ns')
    

#-------------------------------------------------------------------

# This function places a bit value inside FF of specified index.
        
# Hint: How many clocks would it take for value to reach
#       the specified FF?
        
async def input_chain_single(dut, bit, ff_index):

    ######################
    # TODO: YOUR CODE HERE 
    ######################
    dut.scan_en.value = 1
    for i in range(ff_index + 1): #exclusive in python here
        if(i==0):
            dut.scan_in.value = bit
            await step_clock(dut)
        else:
            dut.scan_in.value = 0
            await step_clock(dut)
    
    dut.scan_en.value = 0
    
#-------------------------------------------------------------------

# This function places multiple bit values inside FFs of specified indexes.
# This is an upgrade of input_chain_single() and should be accomplished
#   for Part H of Task 1
        
# Hint: How many clocks would it take for value to reach
#       the specified FF?
        
async def input_chain(dut, bit_list, ff_index):

    dut.scan_en.value = 1

    for bit in reversed(bit_list):  # reverse the list to maintain correct order
        dut.scan_in.value = bit
        # print(bit)
        await step_clock(dut)
    

    for _ in range(ff_index):
        dut.scan_in.value = 0 
        await step_clock(dut)
    
    dut.scan_en.value = 0
    # await step_clock(dut)





#-----------------------------------------------

# This function retrieves a single bit value from the
# chain at specified index 
        
async def output_chain_single(dut, ff_index):

    ######################
    # TODO: YOUR CODE HERE 
    ######################
    await step_clock(dut)
    dut.scan_en.value = 1
    await step_clock(dut)

    for _ in range(CHAIN_LENGTH - ff_index-1): 
        dut.scan_in.value = 0
        await step_clock(dut)
    return dut.scan_out.value      

#-----------------------------------------------

# This function retrieves a single bit value from the
# chain at specified index 
# This is an upgrade of input_chain_single() and should be accomplished
#   for Part H of Task 1
        
async def output_chain(dut, ff_index, output_length):

    ######################
    # TODO: YOUR CODE HERE 
    ######################
    global CHAIN_LENGTH
    dut.scan_en.value = 1
    output_bits = []
    for _ in range(CHAIN_LENGTH - ff_index - output_length ):  # aligning to correct position
        dut.scan_in.value = 0
        await step_clock(dut)
    
    for _ in range(output_length):  # extracting required bits
        output_bits.append(dut.scan_out.value)
        dut.scan_in.value = 0
        await step_clock(dut)

    print(f"output_chain: {list(output_bits)}")
    dut.scan_en.value = 0
    # await step_clock(dut)
    result = list(reversed(list(output_bits)))
    return result





#-----------------------------------------------

# Your main testbench function

#Test for adder
# @cocotb.test()
# async def test(dut):
#     global CHAIN_LENGTH
#     global FILE_NAME    # Make sure to edit this guy
#                         # at the top of the file
    
#     # Setup the scan chain object
#     chain = setup_chain(FILE_NAME)
#     CHAIN_LENGTH = chain.chain_length
    
    
#     test_cases = [
#         (0b1011, 0b0100),  # 11 + 4 = 15
#         (0b0011, 0b0011),  # 3 + 3 = 6
#         (0b1111, 0b0001),  # 15 + 1 = 16 (carry case)
#         (0b0000, 0b0000),  # 0 + 0 = 0 (edge case)
#         (0b0110, 0b1001)   # 6 + 9 = 15
#     ]

#     for first_input, second_input in test_cases:
#         expected_result = first_input + second_input  

#         scan_bits = []
#         for i in range(4):
#             scan_bits.append((second_input >> i) & 1)
#         for i in range(4):
#             scan_bits.append((first_input >> i) & 1)

#         # values into scan chain
#         await input_chain(dut, scan_bits, ff_index=5)

#         dut.scan_en.value = 0
#         await step_clock(dut)

#         # output
#         output_bits = await output_chain(dut, ff_index=0, output_length=5)
#         computed_sum = sum((output_bits[i] << i) for i in range(5))

#         # check result
#         assert computed_sum == expected_result, f"Test failed: {first_input} + {second_input} = {computed_sum}, expected {expected_result}"

# Test for FSM
@cocotb.test()
async def test(dut):
    global CHAIN_LENGTH
    global FILE_NAME  
    
    # Setup the scan chain object
    chain = setup_chain(FILE_NAME)
    CHAIN_LENGTH = chain.chain_length
    
    dut.clk.value = 0
    dut.scan_en.value = 0
    dut.scan_in.value = 0
    dut.data_avail.value = 0
    await Timer(1, units='ns')

    # dictionary to store state transitions and outputs
    fsm_table = {}

    # loop all possible states (3-bit = 8 states)
    for state in range(8):
        # send the state through scan chain
        state_bits = [(state >> i) & 1 for i in range(3)]
        await input_chain(dut, state_bits, ff_index=0)
        
        await Timer(1, units='ns')  # Small delay after disabling scan
        
        #use both possible input values
        for data_avail in [0, 1]:
            dut.data_avail.value = data_avail
            await Timer(1, units='ns')  # Small delay after input change
            
            # capture outputs BEFORE clock edge (Moore machine)
            outputs = (
                int(dut.buf_en.value),
                int(dut.out_sel.value),
                int(dut.out_writing.value)
            )
            await step_clock(dut)
            
            dut.scan_en.value = 1
            await Timer(1, units='ns')  # Small delay after enabling scan
            new_state_bits = await output_chain(dut, ff_index=0, output_length=3)
            new_state = int("".join(map(str, new_state_bits)), 2)
            dut.scan_en.value = 0
            
            fsm_table[(state, data_avail)] = (new_state, outputs)
            
            # Reset
            dut.data_avail.value = 0
            await Timer(1, units='ns')

    #the FSM transition table
    print("\nFSM Transition Table:")
    print("Current State | Data Available | Next State | buf_en | out_sel | out_writing")
    print("-------------------------------------------------------------------------------")
    for (state, data_avail), (next_state, (be, os, ow)) in sorted(fsm_table.items()):
        print(f"{state:13} | {data_avail:14} | {next_state:10} | {be:6} | {os:7} | {ow:10}")
