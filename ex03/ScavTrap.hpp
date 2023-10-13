/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:39:23 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 16:40:00 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap {
    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ~ScavTrap( void );

        /* --------------------------------- Others --------------------------------- */
        void attack( const std::string& target );
        void guardGate();
};

#endif