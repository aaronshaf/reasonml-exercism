let rec range = (x, y) : list(int) => x >= y ? [] : [x, ...range(x + 1, y)];

let factorsOfNumber = (max: int) : list(int) =>
  range(1, max + 1) |> List.filter((number) => max mod number === 0);
