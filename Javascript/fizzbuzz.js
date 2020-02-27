// Run:
//
//   $ node fizzbuzz.js
//

function fizzbuzz(limit, config) {
  return [config[0].message]
}

const limit = 10
const config = [
  { "modulo": 3, "message": "Fizz" },
  { "modulo": 5, "message": "Buzz" },
]

console.log(`limit ${limit}`)
for (var configEntry of config) {
  console.log(`config (${configEntry.modulo}, ${configEntry.message})`)
}

for (var result of fizzbuzz(limit, config)) {
  console.log(result)
}
