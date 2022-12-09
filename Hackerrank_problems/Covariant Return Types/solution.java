import java.io.*;

class Flower {
    String whatsYourName(){
        return " ";
    }
}

class Jasmine extends Flower {
    @Override
    String whatsYourName(){
        return "Jasmine";
    }
}

class Lily extends Flower {
    @Override
    String whatsYourName(){
        return "Lily";
    }
}

class Lotus extends Flower {
    @Override
    String whatsYourName(){
        return "Lotus";
    }
}

class Region {
    Flower yourNationalFlower(){
        return new Flower(); 
    }
}

class WestBengal extends Region {
    @Override
    Jasmine yourNationalFlower(){
        return new Jasmine(); 
    }
}

class AndhraPradesh extends Region {
    @Override
    Lily yourNationalFlower(){
        return new Lily(); 
    }
}

class Karnataka extends Region {
    @Override
    Lotus yourNationalFlower(){
        return new Lotus(); 
    }
}

public class solution {
  public static void main(String[] args) throws IOException {
      BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
      String s = reader.readLine().trim();
      Region region = null;
      switch (s) {
        case "WestBengal":
          region = new WestBengal();
          break;
        case "AndhraPradesh":
          region = new AndhraPradesh();
          break;
        case "Karnataka":
          region = new Karnataka();
          break;
      }
      Flower flower = region.yourNationalFlower();
      System.out.println(flower.whatsYourName());
    }
}