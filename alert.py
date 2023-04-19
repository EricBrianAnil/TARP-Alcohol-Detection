import os
import twilio
from twilio.rest import Client

account_sid = 'XXXXX'
auth_token = 'XXXXX'
client = Client(account_sid, auth_token)


# message = client.messages.create(
#   from_='+15076051584',
#   body='ALERT: Eric is in a state of INSOBRIERTY near TATA VALUE HOMES, CHENNAI at 02:22 AM IST',
#   to='+916282669846'
# )

client.api.account.messages.create(
  from_='+1222222222',
  body='ALERT: Eric is in a state of INSOBRIERTY near TATA VALUE HOMES, CHENNAI at 02:22 AM IST',
  to='+91000000000'
)

#print(message.sid)