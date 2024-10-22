# C Unit Test Generator Project

## Project Overview

This project demonstrates my expertise in **C programming**, **AI-powered tools**, and **automated test case generation**—skills essential for the position at **AMD**. The goal of this project is to develop a **C Unit Test Generator** leveraging **AI techniques** to automate the creation of test cases for C programs, significantly improving efficiency and coverage in testing complex systems.

The project aligns with AMD's mission to research and develop a framework for automated test case generation, particularly to address the challenges of **firmware development** in mission-critical systems, where **manual test generation** is both labor-intensive and difficult to scale.

## Features

- **AI-Driven Unit Test Case Generation:** Uses AI models like Hugging Face and GPT to automatically generate test cases for C programs.
- **CUnit Testing Framework:** Incorporates the **CUnit** testing framework for defining and running unit tests.
- **Mocks, Fakes, and Stubs:** The project demonstrates the usage of mocks, fakes, and stubs in C, critical for **unit testing complex firmware**.
- **Cross-Compatibility:** Works across various C programs, adapting test cases to various codebases.
- **Git Integration:** Complete **Git version control** to track project changes and maintain a clean codebase.

## Project Structure

```bash
├── CProgram
│   └── example_program.c    # Sample C program for test case generation
├── generated_tests
│   └── test_example_program.c  # AI-generated unit test cases
├── requirements.txt         # Python dependencies
├── README.md                # Project documentation
└── test_case_generator.py   # Python script for generating unit tests
```

### Example Unit Test File

```c
#include <CUnit/CUnit.h>
#include "../CProgram/example_program.c"

void test_function1() {
    // Test case for function1
    CU_ASSERT_EQUAL(function1(5), 10);
}

void test_function2() {
    // Test case for function2
    CU_ASSERT_STRING_EQUAL(function2("test"), "success");
}

int test_main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("Example Program Test Suite", NULL, NULL);

    CU_add_test(suite, "Test Case 1", test_function1);
    CU_add_test(suite, "Test Case 2", test_function2);

    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
```

## Technologies and Tools

- **C Programming Language:** Strong experience in **C**, including developing complex systems and firmware. Expert knowledge of **unit tests**, **mocks**, **fakes**, **stubs**, and **Makefile**.
- **Python:** Proficient in using **Python** for tool development and integrating AI models for test generation.
- **AI Libraries (GPT):** Utilizing **AI techniques** to simulate and automate the process of unit test generation.
- **CUnit:** Leveraged the **CUnit** testing framework to execute the generated test cases.
- **Git:** Extensive use of **Git** for version control, ensuring efficient project collaboration and code tracking.

## How It Works

1. **Input:** The tool reads a C program (e.g., `example_program.c`).
2. **AI Generation:** Using AI models, it analyzes the program structure and generates unit test cases automatically.
3. **Output:** The generated test cases are saved in a new file (e.g., `test_example_program.c`), ready to be compiled and executed using the CUnit framework.
4. **Run Tests:** Execute the generated test cases by running the command:
   ```bash
   gcc -o test_program generated_tests/test_example_program.c -lcunit
   ./test_program
   ```

## Key Achievements

- **Automated Test Generation:** Reduced manual test generation effort by leveraging AI, significantly improving coverage.
- **Firmware Testing:** Demonstrated proficiency in creating and running unit tests for **mission-critical firmware**.
- **AI-Powered Tools:** Applied **Generative AI** to automate tedious programming tasks, improving overall productivity.
- **Project Management:** Managed complex workflows using Git, ensuring efficient progress tracking and collaboration.
