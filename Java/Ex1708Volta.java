package com.void_seres_;

import java.util.Scanner;

public class Ex1708Volta {
    public static void main(String[] args) {
        double x, y, diff, runs;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();
        y = s.nextInt();
        diff = y - x;
        runs = (int)calculaVolta(x, (int)diff);

        System.out.println((int)(runs + 1));
    }

    public static double calculaVolta(double faster, int difference) {
        return Math.ceil(faster/difference);
    }
}
