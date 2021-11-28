#include<dpp/dpp.h>
#include<iostream>

int main(){

    // Create an instance of dpp::cluster object
    // this is like Discord.Client object
    dpp::cluster client("Nzk2MzEyNTM2MDEzNzMzODk4.X_WF1w.zJkJOGXRaaqP_fdGleD4jjsyyBw");

    // on ready event
    client.on_ready([&client](const dpp::ready_t &event) {
        std:: cout << client.me.username << " is ready";
    });

    // on message event
    client.on_message_create([&client](const dpp::message_create_t &event){
        if(event.msg.content == "test"){
            client.message_create(dpp::message(event.msg.channel_id, "Hello"));
        }

    });

client.start(false);
return 0;
}