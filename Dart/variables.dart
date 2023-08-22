void printDataTypeExamples() {
  // Integer data type
  int age = 25;

  // Double data type
  double height = 5.9;

  // String data type
  String name = "John Doe";

  // Boolean data type
  bool isStudent = true;

  // Default values for variables
  int uninitializedInt = 0;
  print("Uninitialized int: $uninitializedInt"); // Prints: Uninitialized int: 0 (default value)

  // Type inference with final/const
  final myFinalVariable = 42; // Dart infers the type from the value
  const myConstVariable = 3.14; // Dart infers the type from the value

  // Using var with initialization
  var a = 5; // Dart infers the type based on the assigned value (int in this case)
  var b = 3.14; // Dart infers the type as double
  var c = "Hello, World!"; // Dart infers the type as String

  // Multiple variables of the same type
  int x = 10, y = 20;

  // Using the + operator for string concatenation
  String fullName = "John" + " " + "Doe";

  // Using the += operator for string concatenation
  String greeting = "Hello";
  greeting += " there";

  // Mixing different data types
  String message = "My age is " + age.toString();

  // Boolean operations
  bool isAdult = age >= 18;
  bool isTall = height > 6.0;
  bool isStudentOrTall = isStudent || isTall; // Logical OR

  // Additional arithmetic operations
  int sum = x + y;
  double division = x / y;
  int remainder = x % y;

  // Increment and decrement
  x++; // Increment by 1
  y--; // Decrement by 1

  // Using exponential notation for doubles
  double bigValue = 1.2e5; // 120000.0

  // Escaping characters in strings
  String escapedString = "This is a \"quoted\" string.";

  // Using const with strings
  const constantString = "This is a constant string";

  // Explicitly specifying types with final/const
  final int finalInt = 10;
  const String constantMessage = "This message won't change";

  // Dynamic data type
  dynamic dynamicVar = 10;     // Can hold any type, can change type at runtime
  dynamicVar = "Hello";

  // Type inference
  var dynamicInference = 42;   // Dart infers type based on assigned value

  // String interpolation
  print("My name is $name and I am $age years old.");

  // Type conversion
  int convertedHeight = height.toInt();
  String ageAsString = age.toString();

  // Null safety
  String? nullableString;      // Can be null
  nullableString = "Nullable String";

  // Check for null before using
  if (nullableString != null) {
    print(nullableString);
  }

  // Null-aware operators
  String? possiblyNull;
  String nonNullValue = possiblyNull ?? "Default Value"; // Use default if null

  // Explicit type declaration
  int number = 10;
  double doubleNumber = number.toDouble(); // Explicit conversion

  print(doubleNumber);

  // Runes (for representing Unicode characters)
  var heart = '\u2665';
  print("Unicode heart: $heart");

  // Runes for extended characters
  var currencySymbol = '\u20B9';
  print("Currency symbol: $currencySymbol");
}
