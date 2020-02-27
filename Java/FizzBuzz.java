// Run:
//
//   $ javac FizzBuzz.java
//   $ java FizzBuzz
//

class ConfigEntry {
    public int modulo;
    public String message;

    public ConfigEntry(int modulo, String message) {
      this.modulo = modulo;
      this.message = message;
    }
}

public class FizzBuzz {

  public static void main(String[] args) {
    int limit = 10;
    ConfigEntry[] config = {
      new ConfigEntry(3, "Fizz"),
      new ConfigEntry(5, "Buzz"),
    };

    System.out.printf("limit %d\n", limit);
    for (ConfigEntry configEntry : config) {
      System.out.printf("config (%d, %s)\n", configEntry.modulo, configEntry.message);
    }

    for (String result : fizzbuzz(limit, config)) {
      System.out.printf("%s\n", result);
    }
  }

  public static String[] fizzbuzz(int limit, ConfigEntry[] config) {
    String[] results = { config[0].message };
    return results;
  }

}
