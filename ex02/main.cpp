/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 01:16:15 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    FragTrap first("4WES0ME-TP");

    FragTrap second(first);

    // OK because FragTrap has the ClapTrap part
    ClapTrap third(first);

    // NOT OK because third is missing the FragTrap part and
    // there are no constructers for type ClapTrap
    // FragTrap fourth(third);

    // NOT OK no constructer for this type
    // ScavTrap fourth(first);

    ScavTrap fifth;

    first.highFivesGuys();

    cout << "ClapTrap third has " << third.getEnergy()
         << " energy because was copied by a FrapTrap reference." << endl;

    return 0;
}