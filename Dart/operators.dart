void printOperatorExamples() {
  // Arithmetic Operators
  int a = 10;
  int b = 5;
  int sum = a + b;        // 15
  int difference = a - b; // 5
  int product = a * b;    // 50
  double quotient = a / b; // 2.0
  int remainder = a % b;   // 0
  int integerResult = a ~/ b; // 2

  // Comparison Operators
  bool isEqual = a == b;   // false
  bool isNotEqual = a != b; // true
  bool isLessThan = a < b;  // false
  bool isGreaterThan = a > b; // true
  bool isLessThanOrEqual = a <= b; // false
  bool isGreaterThanOrEqual = a >= b; // true

  // Logical Operators
  bool x = true;
  bool y = false;
  bool andResult = x && y; // false
  bool orResult = x || y;  // true
  bool notResult = !x;     // false

  // Assignment Operators
  int num = 10;
  num += 5; // num is now 15
  num -= 3; // num is now 12
  num *= 2; // num is now 24
  num ~/= 4; // num is now 6 (integer division)
  num %= 5; // num is now 1
  num = num ~/ 2; // num is now 0

  // Output the results
  print("Arithmetic Operators:");
  print("Sum: $sum");
  print("Quotient: $quotient");
  print("Remainder: $remainder");
  print("Integer Result of Division: $integerResult");

  print("\nComparison Operators:");
  print("isEqual: $isEqual");
  print("isNotEqual: $isNotEqual");
  print("isLessThan: $isLessThan");
  print("isGreaterThan: $isGreaterThan");
  print("isLessThanOrEqual: $isLessThanOrEqual");
  print("isGreaterThanOrEqual: $isGreaterThanOrEqual");

  print("\nLogical Operators:");
  print("andResult: $andResult");
  print("orResult: $orResult");
  print("notResult: $notResult");

  print("\nAssignment Operators:");
  print("num: $num");
}
