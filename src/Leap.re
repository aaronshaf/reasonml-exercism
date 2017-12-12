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

Js.log("Year not divisible by 4: common year");

Js.log(isLeapYear(2015) === false ? "Passed" : "Failed");

Js.log("Year divisible by 4, not divisible by 100: leap year");

Js.log(isLeapYear(1996) === true ? "Passed" : "Failed");

Js.log("Year divisible by 100, not divisible by 400: common year");

Js.log(isLeapYear(2100) === false ? "Passed" : "Failed");

Js.log("Year divisible by 400: leap year");

Js.log(isLeapYear(2000) === true ? "Passed" : "Failed");
