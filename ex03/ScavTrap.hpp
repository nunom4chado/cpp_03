/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:39:23 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 18:35:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap();                    // Default Constructer (Canonical)
    ScavTrap(std::string name);    // Parametric Constructer
    ScavTrap(const ScavTrap &src); // Copy Constructer (Canonical)
    ~ScavTrap();                   // Destructer (Canonical)

    ScavTrap &operator=(const ScavTrap &rhs); // Assignment Operator (Canonical)

    // Other Member Functions
    void attack(const std::string &target);
    void guardGate();

    static const unsigned int defaultHitPoints;
    static const unsigned int defaultEnergyPoints;
    static const unsigned int defaultAttackDmg;
};

#endif