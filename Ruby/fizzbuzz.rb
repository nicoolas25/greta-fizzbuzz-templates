# Run:
#
#   $ ruby fizzbuzz.rb
#

ConfigEntry = Struct.new(:modulo, :message)

def fizzbuzz(limit, config)
  [config.first.message]
end

limit = 10
config = [
  ConfigEntry.new(3, "Fizz"),
  ConfigEntry.new(5, "Buzz"),
]

puts "limit #{limit}"
config.each do |config_entry|
  puts "config (#{config_entry.modulo}, #{config_entry.message})"
end

fizzbuzz(limit, config).each do |result|
  puts result
end
