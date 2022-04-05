package Ex1708;

import java.util.*;

public class Volta
{   
    public static void main(String[] args)
    {
        double x, y, diff, runs;
        Scanner s = new Scanner(System.in);
        
        x = s.nextInt();
        y = s.nextInt();
        diff = y - x;
        runs = (int)calculaVolta((double)x, (int)diff);
        
        System.out.println((int)(runs + 1));
    }
    
    public static double calculaVolta(double faster, int difference)
    {
        return Math.ceil(faster/difference);
    }
}