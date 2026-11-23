void registrarEquipo(Equipo arregloEquipos[], int &totalEquipos)  { 
    // 
1. Tope de seguridad: Verificar que no exceda el límite del 
torneo 
if (totalEquipos >= MAX_EQUIPOS) { 
std::cout << "Error: El torneo esta lleno. Maximo de equipos 
alcanzado.\n"; 
return; 
}

  // 
2. Pedir los datos al usuario 
std::cout << "Ingresa el nombre del nuevo equipo: "; 
std::string nuevoNombre; 

  // 
Usamos getline en lugar de cin por si el equipo tiene espacios 
(ej. "Real Madrid") 
    // 
std::cin.ignore(); // (Nota: Si se salta la lectura en la 
terminal, descomenta esta línea) 
std::getline(std::cin, nuevoNombre);
