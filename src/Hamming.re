/* http://exercism.io/exercises/ocaml/hamming/readme
   Calculate the Hamming difference between two DNA strands.
   */
let stringToListOfChars = (str: string) : list(char) =>
  Array.init(String.length(str), (i) => str.[i]) |> Array.to_list;

let hammingDistance = (strand1: string, strand2: string) : int => {
  let list1 = stringToListOfChars(strand1);
  let list2 = stringToListOfChars(strand2);
  List.fold_left2(
    (state, char1, char2) => char1 === char2 ? state : state + 1,
    0,
    list1,
    list2
  )
};

/* Tests
 */
Js.log("small distance");

Js.log(hammingDistance("GGACG", "GGTCG") === 1 ? "Passed" : "Failed");

Js.log("large distance");

Js.log(hammingDistance("GATACA", "GCATAA") === 4 ? "Passed" : "Failed");

Js.log("large distance in off-by-one strand");

Js.log(
  hammingDistance("GGACGGATTCTG", "AGGACGGATTCT") === 9 ? "Passed" : "Failed"
);
