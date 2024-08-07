#include "mocked_functions.h"

#include <stdarg.h>
#include <setjmp.h>
#include <stddef.h>
#include <cmocka.h>

void manageValvePower( DeviceState_t state )
{
    check_expected( state );
}
void manageWaterPump( DeviceState_t state )
{
    check_expected( state );
}

status_t sendDataToValves( const uint64_t *data )
{
    check_expected( *data );

    return mock_type( status_t );
}

bool shouldWaterPumpTrigger()
{
    return mock_type( bool );
}
bool shouldWaterAlaramTrigger()
{
    return mock_type( bool );
}

pictureData_t *getPicture()
{
    return mock_ptr_type( pictureData_t * );
}
