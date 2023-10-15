/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 00:11:10 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    ScavTrap first("GU4RD-TP");

    first.guardGate();
    first.attack("Handsome Jack");
    cout << first.getName() << " has " << first.getEnergy() << " energy"
         << endl;

    cout << "--------------------------------------------------" << endl;

    ScavTrap second = first;

    return 0;
}