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

namespace keyple {
namespace core {
namespace plugin {
namespace spi {
namespace reader {
namespace observable {
namespace state {
namespace removal {

/**
 * Reader able to wait autonomously and indefinitely for the removal of a card by implementing a
 * waiting mechanism.
 *
 * <p>A typical example of readers conforming to this mode of operation are PC/SC type readers
 * capable of performing RF polling without waiting for a command from the application.
 *
 * @since 2.0
 */
class WaitForCardRemovalBlockingSpi {
public:
    /**
     * Waits indefinitely for a card to be removed.
     *
     * <p>This wait can be cancelled for an internal (for example timeout) or external reason (for
     * example invocation of {@link #stopWaitForCardRemoval()}), in this case an exception is
     * raised.
     *
     * @throw ReaderIOException If the communication with the reader
     * @throw TaskCanceledException If the task has been canceled and is no longer active
     * @since 2.0
     */
    virtual void waitForCardRemoval() = 0;

    /**
     * Interrupts the waiting of the removal of the card
     *
     * @since 2.0
     */
    virtual void stopWaitForCardRemoval() = 0;
};

}
}
}
}
}
}
}
}
