/**************************************************************************************************
 * Copyright (c) 2021 Calypso Networks Association                                                *
 * https://www.calypsonet-asso.org/                                                               *
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

#include <memory>
#include <string>
#include <vector>

namespace keyple {
namespace core {
namespace plugin {

/**
 * API associated to a {@link org.eclipse.keyple.core.plugin.spi.AutonomousObservablePluginSpi}
 *
 * @since 2.0
 */
class AutonomousObservablePluginApi {
public:
    /**
     * Must be invoked when one or more readers are connected to the system.
     *
     * @param readers the readers connected
     * @throw IllegalArgumentException If the Set provided as argument is null or empty
     * @since 2.0
     */
    virtual void onReaderConnected(const std::vector<std::shared_ptr<ReaderSpi>>& readers) = 0;

    /**
     * Must be invoked when one or more readers are disconnected from the system.
     *
     * @param readersNames the readers names disconnected
     * @throw IllegalArgumentException If the Set provided as argument is null or empty
     * @since 2.0
     */
    virtual void onReaderDisconnected(const std::vector<const std::string> readersNames) = 0;
};

}
}
}
