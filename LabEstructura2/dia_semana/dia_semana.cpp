#include <iostream>
#include <string>

std::string obtenerDiaSemana(int dia, int mes, int anio) {
    // Ajustar el mes y el año para enero y febrero
    if (mes < 3) {
        mes += 12;
        anio--;
    }

    int K = anio % 100;
    int J = anio / 100;

    // Fórmula de Zeller
    int diaSemana = (dia + 13 * (mes + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;

    // Asegurarse de que el resultado esté en el rango [0, 6]
    if (diaSemana < 0) {
        diaSemana += 7;
    }

    // Convertir el resultado a un día de la semana
    std::string diasSemana[] = {"Sábado", "Domingo", "Lunes", "Martes", "Miércoles", "Jueves", "Viernes"};
    return diasSemana[diaSemana];
}

int main() {
    int dia, mes, anio;

    // Solicitar la fecha al usuario
    std::cout << "Ingrese la fecha (DD MM AAAA): ";
    std::cin >> dia >> mes >> anio;

    // Obtener y mostrar el día de la semana
    std::string diaSemana = obtenerDiaSemana(dia, mes, anio);
    std::cout << "El " << dia << "/" << mes << "/" << anio << " fue un " << diaSemana << "." << std::endl;

    return 0;
}
