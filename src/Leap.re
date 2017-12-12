/* http://exercism.io/exercises/ocaml/leap/readme */
/*
 on every year that is evenly divisible by 4
   except every year that is evenly divisible by 100
     unless the year is also evenly divisible by 400
 */
let isLeapYear = (year: int) : bool => {
  let isDivisibleBy4 = year mod 4 === 0;
  let isDivisibleBy100 = year mod 100 === 0;
  let isDivisibleBy400 = year mod 400 === 0;
  isDivisibleBy4 && (isDivisibleBy100 === false || isDivisibleBy400)
};
