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
namespace insertion {

/**
 * Reader that require an external active stimulation to detect card insertion without implementing
 * a waiting mechanism.
 *
 * <p>A typical example of readers conforming to this mode of operation are terminals embedding a
 * slave RF communication module.
 *
 * @since 2.0.0
 */
class WaitForCardInsertionNonBlockingSpi {};

}
}
}
}
}
}
}
}
