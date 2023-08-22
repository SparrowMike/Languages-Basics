void controlFlowExamples() {
  // If-Else Statement
  int temperature = 25;
  if (temperature > 30) {
    print("It's hot outside!");
  } else if (temperature > 20) {
    print("It's warm outside.");
  } else {
    print("It's cold outside.");
  }

  // Switch Statement
  String day = "Monday";
  switch (day) {
    case "Monday":
      print("Back to work!");
      break;
    case "Friday":
      print("Weekend is coming!");
      break;
    default:
      print("Regular day.");
  }

  // For Loop
  print("\nCounting from 1 to 5 using a for loop:");
  for (int i = 1; i <= 5; i++) {
    print(i);
  }

  // While Loop
  print("\nCounting from 5 to 1 using a while loop:");
  int countdown = 5;
  while (countdown > 0) {
    print(countdown);
    countdown--;
  }

  // Do-While Loop
  print("\nPrinting numbers from 1 to 3 using a do-while loop:");
  int num = 1;
  do {
    print(num);
    num++;
  } while (num <= 3);

  // Break Statement
  print("\nBreaking out of a loop using the break statement:");
  for (int i = 1; i <= 10; i++) {
    print(i);
    if (i == 5) {
      print("Breaking the loop.");
      break;
    }
  }

  // Continue Statement
  print("\nSkipping even numbers using the continue statement:");
  for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0) {
      continue;
    }
    print(i);
  }
}