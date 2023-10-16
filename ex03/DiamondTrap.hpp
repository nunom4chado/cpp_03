/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:04 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 16:01:34 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
#define DIAMONDTRAP_CLASS_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
  public:
    DiamondTrap();                       // Default Constructer (Canonical)
    DiamondTrap(std::string name);       // Parametric Constructer
    DiamondTrap(const DiamondTrap &src); // Copy Constructer (Canonical)
    ~DiamondTrap();                      // Destructer (Canonical)

    // Assignment Operator (Canonical)
    DiamondTrap &operator=(const DiamondTrap &rhs);

    // Other Member Functions
    using ScavTrap::attack;
    void whoAmI();

  private:
    std::string _name;
};

#endif