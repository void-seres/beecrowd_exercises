package com.void_seres_;

import java.util.Scanner;

public class Ex1016Distancia {
    public static void main(String[] args) {
        int y;
        Scanner s = new Scanner(System.in);

        y = s.nextInt();
        // se o carro y se distanica 1 quilômetro a cada 2 minutos do outro carro, só é necessário que multiplique y por 2
        // if car y take the distance of 1 kilometer each 2 minutes from the other car, it is only needed to multiply y by 2

        System.out.println((y*2) + " minutos");
    }
}
