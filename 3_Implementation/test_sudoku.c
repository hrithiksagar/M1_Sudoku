// Test all the functions made for the program
#include "sudoku.h"
#include "unity.h"

int sudoku[9][9] =   { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

int WrongSudoku[9][9] = { { 3, 3, 6, 5, 1, 8, 4, 0, 0 },
                          { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                          { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                          { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                          { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                          { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                          { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                          { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                          { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

int CorrectSudoku[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                            { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                            { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                            { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                            { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                            { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                            { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                            { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                            { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void TestingSafe(void)
{
    TEST_ASSERT_EQUAL(0, secures(sudoku,0,0,1));
    TEST_ASSERT_EQUAL(1, secures(sudoku,0,4,6));
}

void TestingSolve(void)
{
    TEST_ASSERT_EQUAL(0, solvings(sudoku,0,0));
    TEST_ASSERT_EQUAL(1, solvings(WrongSudoku,0,0));
    TEST_ASSERT_EQUAL(1, solvings(CorrectSudoku,0,0));
}

void TestingPrint(void)
{
   
    TEST_ASSERT_EQUAL(0, printings(sudoku));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(TestingSafe);
    RUN_TEST(TestingSolve);
    RUN_TEST(TestingPrint);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
                                       