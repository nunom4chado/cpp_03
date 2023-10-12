/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:11:26 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 15:13:05 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( std::string name );
        ~FragTrap( void );

        /* --------------------------------- Others --------------------------------- */
        void highFivesGuys(void);
};

#endif