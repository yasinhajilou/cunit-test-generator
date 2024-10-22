#include "/opt/homebrew/include/CUnit/CUnit.h"  
#include "/opt/homebrew/include/CUnit/Basic.h"  
#include "../CProgram/example_program.c"


int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

void test_add(void) {
    CU_ASSERT_EQUAL(add(3, 4), 7);
}

void test_subtract(void) {
    CU_ASSERT_EQUAL(subtract(10, 5), 5);
}

void test_multiply(void) {
    CU_ASSERT_EQUAL(multiply(6, 7), 42);
}

void test_divide(void) {
    CU_ASSERT_EQUAL(divide(15, 3), 5);
    CU_ASSERT_EQUAL(divide(10, 0), 0);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("Suite", init_suite, clean_suite);
    
    CU_add_test(suite, "test_add", test_add);
    CU_add_test(suite, "test_subtract", test_subtract);
    CU_add_test(suite, "test_multiply", test_multiply);
    CU_add_test(suite, "test_divide", test_divide);
    
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
