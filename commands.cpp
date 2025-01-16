ASSERT_EQ(expected, actual);      // Checks if expected == actual
EXPECT_EQ(expected, actual);      // Checks if expected == actual (continues execution if fails)

ASSERT_NE(val1, val2);            // Checks if val1 != val2
EXPECT_NE(val1, val2);            // Checks if val1 != val2 (continues execution if fails)

ASSERT_LT(val1, val2);            // Checks if val1 < val2
EXPECT_LT(val1, val2);            // Checks if val1 < val2 (continues execution if fails)

ASSERT_LE(val1, val2);            // Checks if val1 <= val2
EXPECT_LE(val1, val2);            // Checks if val1 <= val2 (continues execution if fails)

ASSERT_GT(val1, val2);            // Checks if val1 > val2
EXPECT_GT(val1, val2);            // Checks if val1 > val2 (continues execution if fails)

ASSERT_GE(val1, val2);            // Checks if val1 >= val2
EXPECT_GE(val1, val2);            // Checks if val1 >= val2 (continues execution if fails)

ASSERT_TRUE(condition);           // Checks if condition is true
EXPECT_TRUE(condition);           // Checks if condition is true (continues execution if fails)

ASSERT_FALSE(condition);          // Checks if condition is false
EXPECT_FALSE(condition);          // Checks if condition is false (continues execution if fails)

ASSERT_STREQ(str1, str2);         // Checks if C-strings str1 and str2 are equal
EXPECT_STREQ(str1, str2);         // Checks if C-strings str1 and str2 are equal (continues execution if fails)

ASSERT_STRNE(str1, str2);         // Checks if C-strings str1 and str2 are not equal
EXPECT_STRNE(str1, str2);         // Checks if C-strings str1 and str2 are not equal (continues execution if fails)

ASSERT_THROW(statement, ExceptionType);  // Checks if statement throws an exception of type ExceptionType
EXPECT_THROW(statement, ExceptionType);  // Checks if statement throws an exception of type ExceptionType (continues execution if fails)

ASSERT_NO_THROW(statement);       // Checks if statement does not throw any exception
EXPECT_NO_THROW(statement);       // Checks if statement does not throw any exception (continues execution if fails)

ASSERT_ANY_THROW(statement);      // Checks if statement throws any exception
EXPECT_ANY_THROW(statement);      // Checks if statement throws any exception (continues execution if fails)

ASSERT_DEATH(statement, regex);   // Checks if statement terminates the process with a message matching regex
EXPECT_DEATH(statement, regex);   // Checks if statement terminates the process with a message matching regex (continues execution if fails)

ASSERT_FATAL(statement);          // This is an alias for ASSERT_DEATH(statement, "")
EXPECT_FATAL(statement);          // This is an alias for EXPECT_DEATH(statement, "")
