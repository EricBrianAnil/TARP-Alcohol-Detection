import os
import twilio
from twilio.rest import Client

account_sid = 'AC92ca96928cce0c503d892fl0c7430f870'
auth_token = '798e86211c376fbabbd712b386ae52ee'
client = Client(account_sid, auth_token)


# message = client.messages.create(
#   from_='+15076051584',
#   body='ALERT: Eric is in a state of INSOBRIERTY near TATA VALUE HOMES, CHENNAI at 02:22 AM IST',
#   to='+916282669846'
# )

client.api.account.messages.create(
  from_='+15076051584',
  body='ALERT: Eric is in a state of INSOBRIERTY near TATA VALUE HOMES, CHENNAI at 02:22 AM IST',
  to='+916282669846'
)

#print(message.sid)