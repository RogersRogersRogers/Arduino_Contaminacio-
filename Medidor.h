// -*- mode: c++ -*-

/**
 * @file Medidor.h
 * @brief Controlador para medir la concentración de CO2.
 * @author Rogers Ernesto Sobrado Meneses
 */

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------

 /**
   * @brief Constructor de la clase Medidor.
   */
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  // .....................................................
   /**
   * @function iniciarMedidor
   * @brief Inicializa el medidor.
   */
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  // .....................................................
  /**
   * @function medirCO2
   * @brief Mide la concentración de CO2.
   * @return Concentración de CO2 en ppm.
   * @note Este método devuelve un valor fijo para pruebas.
   */
  int medirCO2() {
	return 50;
  } // ()

  // .....................................................
  // .....................................................
  /**
   * @function medirTemperatura
   * @brief Mide la temperatura.
   * @return Temperatura en grados Celsius.
   * @note Este método devuelve un valor fijo para pruebas.
   */
  int medirTemperatura() {
	return 76; // qué frío !
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
