/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:14 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 17:57:35 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* -------------------------------------------------------------------------- */
/*                         Constructers & Desctructer                         */
/* -------------------------------------------------------------------------- */
DiamondTrap::DiamondTrap( void ): ClapTrap("D14M0ND-TP_clap_name"), FragTrap("D14M0ND-TP"), ScavTrap("D14M0ND-TP") {
    this->_name = "D14M0ND-TP";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;

    std::cout << "DiamondTrap " << this->_name << " spawned" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDmg = FragTrap::_attackDmg;

    std::cout << "DiamondTrap " << this->_name << " spawned" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << this->_name << " was destroyed" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                                   Others                                   */
/* -------------------------------------------------------------------------- */
void DiamondTrap::whoAmI(void) {
    std::cout << "Greetings minion! My name is " << this->_name << " but some people know me as " << this->ClapTrap::_name << std::endl;
}