let raindrops = (number: int) : string => {
  let factors = MyUtils.factorsOfNumber(number);
  let raindropSpeak = ref("");
  if (List.mem(3, factors)) {
    raindropSpeak := raindropSpeak^ ++ "Pling"
  };
  if (List.mem(5, factors)) {
    raindropSpeak := raindropSpeak^ ++ "Plang"
  };
  if (List.mem(7, factors)) {
    raindropSpeak := raindropSpeak^ ++ "Plong"
  };
  raindropSpeak^ === "" ? string_of_int(number) : raindropSpeak^
};

/* Tests
 */
Js.log("the sound for 1 is 1");

Js.log(raindrops(1) === "1" ? "Passed" : "Failed");

Js.log("the sound for 3 is Pling");

Js.log(raindrops(3) === "Pling" ? "Passed" : "Failed");

Js.log("the sound for 15 is PlingPlang as it has factors 3 and 5");

Js.log(raindrops(15) === "PlingPlang" ? "Passed" : "Failed");

Js.log("the sound for 35 is PlangPlong as it has factors 5 and 7");

Js.log(raindrops(35) === "PlangPlong" ? "Passed" : "Failed");

Js.log("the sound for 105 is PlingPlangPlong as it has factors 3, 5 and 7");

Js.log(raindrops(105) === "PlingPlangPlong" ? "Passed" : "Failed");

Js.log("the sound for 3125 is Plang as it has a factor 5");

Js.log(raindrops(3125) === "Plang" ? "Passed" : "Failed");
