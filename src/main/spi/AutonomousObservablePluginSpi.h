/**************************************************************************************************
 * Copyright (c) 2021 Calypso Networks Association https://calypsonet.org/                        *
 *                                                                                                *
 * See the NOTICE file(s) distributed with this work for additional information regarding         *
 * copyright ownership.                                                                           *
 *                                                                                                *
 * This program and the accompanying materials are made available under the terms of the Eclipse  *
 * Public License 2.0 which is available at http://www.eclipse.org/legal/epl-2.0                  *
 *                                                                                                *
 * SPDX-License-Identifier: EPL-2.0                                                               *
 **************************************************************************************************/

#pragma once

#include <list>
#include <memory>
#include <string>

/* Plugin */
#include "AutonomousObservablePluginApi.h"
#include "PluginSpi.h"

namespace keyple {
namespace core {
namespace plugin {
namespace spi {

using namespace keyple::core::plugin;

/**
 * Plugin (non pool) having autonomous capabilities to observe reader connections and
 * disconnections.
 *
 * <p>Plugin events are produced by the plugin itself.
 *
 * @since 2.0.0
 */
class AutonomousObservablePluginSpi : public PluginSpi {
public:
    /**
     * 
     */
    virtual ~AutonomousObservablePluginSpi() = default;

    /**
     * Connects the associated Keyple Core {@link AutonomousObservablePluginApi} API.
     *
     * /!\ C++: cannot use a shared_ptr here as this function is called from constructors
     *
     * @param autonomousObservablePluginApi The API to connect.
     * @since 2.0.0
     */
    virtual void connect(AutonomousObservablePluginApi* autonomousObservablePluginApi) = 0;
};

}
}
}
}
