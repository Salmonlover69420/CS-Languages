// Input Methods Comparison:
//
// 1. cin >> var;
//    - Reads one word/value: skips leading whitespace, stops at the first space or '\n'.
//    - Leaves the rest of the input and '\n' in the buffer (e.g., Input: "John Doe\n" -> stores "John", leaves " Doe\n").
//
// 2. cin.getline(Object.var, Size, '\n');   // For C-style char[] arrays
//    - Reads up to Size - 1 characters (leaving 1 byte for '\0'), including spaces, and removes '\n' from the buffer.
//    - Delimiter must be a char ('\n'), NOT a string literal ("\n"). ('\n' is optional since it is the default.)
//
// 3. getline(cin, var);                     // For std::string (requires #include <string>)
//    - Reads the entire line including spaces, removes '\n' from the buffer, and requires no size limit.
//
// 4. cin.ignore(INT_MAX, '\n');
//    - Discards leftover characters and '\n' from the buffer (e.g., " Doe\n" after cin >>) so they don't get skipped/read by the next getline.
//    - Always keep '\n' as the 2nd argument—cin.ignore(INT_MAX) alone waits for EOF instead of stopping at the newline.
