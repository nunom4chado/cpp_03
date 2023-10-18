/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 18:41:12 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
    DiamondTrap first("D-TP");

    cout << "VERIFY DIAMONDTRAP VALUES" << endl
         << "hp: " << first.getHp()
         << " (FragTrap:" << FragTrap::defaultHitPoints
         << ", ScavTrap:" << ScavTrap::defaultHitPoints << ")" << endl
         << "energy: " << first.getEnergy()
         << " (FragTrap:" << FragTrap::defaultEnergyPoints
         << ", ScavTrap:" << ScavTrap::defaultEnergyPoints << ")" << endl
         << "attackDmg: " << first.getAttackDmg()
         << " (FragTrap:" << FragTrap::defaultAttackDmg
         << ", ScavTrap:" << ScavTrap::defaultAttackDmg << ")" << endl
         << endl;

    cout << "--------------------------------------------------" << endl;

    cout << first.getName() << " has " << first.getEnergy() << endl;
    first.attack("Handsome Jack");
    first.whoAmI();

    cout << "--------------------------------------------------" << endl;

    DiamondTrap second(first);
    cout << second.getName() << " has " << second.getEnergy() << endl;
    second.attack("someone");
    second.whoAmI();

    cout << "--------------------------------------------------" << endl;

    cout << "Create ScavTrap from DiamondTrap" << endl;
    ScavTrap third(first); // NOLINT

    cout << "Create FragTrap from DiamondTrap" << endl;
    FragTrap fourth(first); // NOLINT

    cout << "Create ClapTrap from DiamondTrap" << endl;
    ClapTrap fifth(first); // NOLINT

    cout << "--------------------------------------------------" << endl;

    return 0;
}