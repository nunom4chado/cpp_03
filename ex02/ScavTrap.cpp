/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:55:16 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 14:52:14 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
ScavTrap::ScavTrap( void ): ClapTrap("SC4V-TP") {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDmg = 20;

    std::cout << "ScavTrap " << this->_name << " spawned" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDmg = 20;

    std::cout << "ScavTrap " << this->_name << " spawned" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap " << this->_name << " was destroyed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */
void ScavTrap::attack( const std::string& target ) {

    if (this->_energyPoints) {
        this->_energyPoints--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target
        << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
    } else
        std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode!" << std::endl;
}