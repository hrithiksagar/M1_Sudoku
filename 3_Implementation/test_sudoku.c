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

void TestSafe(void)
{
    TEST_ASSERT_EQUAL(0, safeSudoku(sudoku,0,0,1));
    TEST_ASSERT_EQUAL(1, safeSudoku(sudoku,0,4,6));
}

void TestSolve(void)
{
    TEST_ASSERT_EQUAL(0, solveSudoku(sudoku,0,0));
    TEST_ASSERT_EQUAL(1, solveSudoku(WrongSudoku,0,0));
    TEST_ASSERT_EQUAL(1, solveSudoku(CorrectSudoku,0,0));
}

void TestPrint(void)
{
   
    TEST_ASSERT_EQUAL(0, printSudoku(sudoku));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(TestSafe);
    RUN_TEST(TestSolve);
    RUN_TEST(TestPrint);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
                                       