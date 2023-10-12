/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 15:04:47 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void ) {
    ScavTrap a("GU4RD-TP");

    a.guardGate();
    a.attack("Awesome Jack");
    std::cout << a.getName() << " has " << a.getEnergy() << " energy" << std::endl;

    ScavTrap b;
    

    return 0;
}