class CfgPatches {
    class VirtualGarage_Server {
        requiredVersion = 0.1;
        requiredAddons[]=
        {
            "exile_client"
        };
        units[] = {};
        weapons[] = {};
    };
};
class CfgFunctions {
    class VirtualGarageServer {
        class main {
            file="VirtualGarage_Server\bootstrap";
            class preInit {
                preInit = 1;
            };
            class postInit {
                postInit = 1;
            };
        };
    };
};
