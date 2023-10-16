/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:14 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 16:34:06 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "colors.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
DiamondTrap::DiamondTrap(void)
    : ClapTrap("D14M0ND-TP_clap_name"), _name("D14M0ND-TP") {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;

    cout << CYAN << "[DiamondTrap Default Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name),
      _name(name) {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;

    cout << CYAN << "[DiamondTrap Parametric Constructer]: " << this->_name
         << " spawned" << RESET << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
    : ClapTrap(src), FragTrap(src), ScavTrap(src) {
    cout << CYAN << "[DiamondTrap Copy Constructer]: DiamondTrap " << src._name
         << " copied" << RESET << endl;
    *this = src;
}

DiamondTrap::~DiamondTrap(void) {
    cout << CYAN << "[DiamondTrap Destructer]: " << this->_name
         << " was destroyed" << RESET << endl;
}

/* -------------------------------------------------------------------------- */
/*                             Operator Overloads                             */
/* -------------------------------------------------------------------------- */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    cout << CYAN << "[DiamondTrap Assignment Operator]: rhs name is "
         << rhs._name << RESET << endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDmg = rhs._attackDmg;
    }

    return *this;
}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */
void DiamondTrap::whoAmI(void) {
    cout << CYAN << "[whoAmI] Greetings minion! My name is " << this->_name
         << " but some people know me as " << this->ClapTrap::_name << RESET
         << endl;
}