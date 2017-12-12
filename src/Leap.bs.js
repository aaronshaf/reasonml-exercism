// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';


function isLeapYear(year) {
  var isDivisibleBy4 = +(year % 4 === 0);
  var isDivisibleBy100 = +(year % 100 === 0);
  var isDivisibleBy400 = +(year % 400 === 0);
  if (isDivisibleBy4) {
    if (isDivisibleBy100) {
      return isDivisibleBy400;
    } else {
      return /* true */1;
    }
  } else {
    return /* false */0;
  }
}

exports.isLeapYear = isLeapYear;
/* No side effect */