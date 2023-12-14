/*
 * ENUNCIADO: Crear un programa en c++ que permita barajar las 52 cartas
 * de un casino, en donde una carta del mismo tipo este separada de otra
 * almenos 6 cartas de distancia.
 * INTEGRANTES: 1113684 - Clay Manuel Gomera Arias
 *              1116614 - Luis Daniel de la Cruz García
 *              1114950 - Elian Gabriel Villegas Báez
 *              1115808 - Edward Isaac Diaz Campusano
 *              1113902 - Yu jhih Chen Yeh
 *              1116238 - I Chia Chen Wang
 * FECHA: 12/12/2023 <== Fecha de realización
 */

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

typedef sf::Vector2f Vec2;
typedef sf::RenderWindow Window;

void setup(Window* w) {
    w->create(sf::VideoMode(1280, 720), "Triangulo");
    w->setFramerateLimit(60);
}

void drawVertex(Vec2 p, sf::Color color, Window* window) {
    sf::VertexArray vertex(sf::Points, 1);
    vertex[0].position = p;
    vertex[0].color = color;
    window->draw(vertex);
}

void pollEvents(Window* w) {
    sf::Event e;
    while (w->pollEvent(e)) {
        if (e.type == sf::Event::Closed) {
            w->close();
        }
    }
}

int main(void) {
    cout << "Bienvenido al programa triangulo" << endl;
    Window w;
    setup(&w);

    while (w.isOpen()) {
        pollEvents(&w);
        w.clear();

        int windowWidth = w.getSize().x;
        int windowHeight = w.getSize().y;
        int distance = 320;

        Vec2 v1 = Vec2(windowWidth / 2.0, windowHeight / 2.0 - distance);
        Vec2 v2 = Vec2(windowWidth / 2.0 + distance, windowHeight / 2.0 + distance);
        Vec2 v3 = Vec2(windowWidth / 2.0 - distance, windowHeight / 2.0 + distance);
        Vec2 vExterior = Vec2(windowWidth / 2.0, windowHeight / 2.0 + distance * 2);

        drawVertex(v1, sf::Color::Red, &w);
        drawVertex(v2, sf::Color::Green, &w);
        drawVertex(v3, sf::Color::Blue, &w);
        drawVertex(vExterior, sf::Color::Yellow, &w);

        for (int i = 0; i < 30000; i++) {
            int dice = rand() % 3 + 1;

            Vec2 vRandom;
            if (dice == 1) {
                vRandom = Vec2((v1.x + vExterior.x) / 2, (v1.y + vExterior.y) / 2);
            } else if (dice == 2) {
                vRandom = Vec2((v2.x + vExterior.x) / 2, (v2.y + vExterior.y) / 2);
            } else {
                vRandom = Vec2((v3.x + vExterior.x) / 2, (v3.y + vExterior.y) / 2);
            }

            sf::Color colors[2] = {sf::Color::Yellow, sf::Color::Green};

            drawVertex(vRandom, colors[i % 5], &w);

            vExterior = vRandom;

            if (i % 12 == 0) {
                w.display();
            }
        }
    }

    return 0;
}
