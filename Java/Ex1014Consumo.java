package com.void_seres_;

import java.util.Scanner;

public class Ex1014Consumo {
    public static void main(String[] args) {
        int x;
        double y, gas;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();
        y = s.nextDouble();
        gas = (Math.round((x*1000.0)/y)/1000.0);

        System.out.println(gas + " km/l");
    }
}
