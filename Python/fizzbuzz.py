# Run:
#
#   $ python fizzbuzz.py
#

def fizzbuzz(limit, tuples):
    return [tuples[0][1]]

limit = 10
config = [(3, "Fizz"), (5, "Buzz")]

print "limit %d" % limit
print "config (%d, %s)" % config[0]
print "config (%d, %s)" % config[1]

for result in fizzbuzz(limit, config):
    print result
