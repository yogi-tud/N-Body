/*
 * N_Body.cpp
 *
 *  Created on: 10.01.2014
 *      Author: ulkba_000
 */

#include "N_Body.h"

template <class P, class ER>
N_Body<P, ER>::N_Body(P data[], int size) {
	this->data_size = size;
	this->particle_data = data;
}

template <class P, class ER>
int N_Body<P, ER>::compute(){

	//mpi master finden
	//broadcast der particle
	//alle ermitteln ihren streifen
	//berechnung mittels openMP
	//ergebnisse zusammen führen
	//fertig

	return -1;	//TODO imagine some error codes
}

