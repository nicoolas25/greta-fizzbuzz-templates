<?php
// Run:
//
//   $ php fizzbuzz.php
//

function fizzbuzz($limit, $pairs) {
  return array($pairs[3]);
}

$limit = 10;
$pairs = array(3 => "Fizz", 5 => "Buzz");

printf("limit %d\n", $limit);
foreach ($pairs as $modulo => $message) {
  printf("pairs (%d, %s)\n", $modulo, $message);
}

foreach (fizzbuzz($limit, $pairs) as $result) {
  printf("%s\n", $result);
}

?>
