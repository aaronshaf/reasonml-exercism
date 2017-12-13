let sum = (squares: list(int)) : int =>
  List.fold_left((state, number) => state + number, 0, squares);

let square = (number: int) : int => number * number;

let squareList = (numbers: list(int)) : list(int) =>
  List.map((number) => number * number, numbers);

let sumOfSquares = (max: int) : int =>
  Exercism.Utils.range(1, max + 1) |> squareList |> sum;

let squareOfSum = (max: int) : int =>
  Exercism.Utils.range(1, max + 1) |> sum |> square;

/*
 Tests
  */
Js.log("difference of squares 1");

Js.log(squareOfSum(1) - sumOfSquares(1) === 0 ? "Passed" : "Failed");

Js.log("difference of squares 5");

Js.log(squareOfSum(5) - sumOfSquares(5) === 170 ? "Passed" : "Failed");

Js.log("difference of squares 100");

Js.log(
  squareOfSum(100) - sumOfSquares(100) === 25164150 ? "Passed" : "Failed"
);
