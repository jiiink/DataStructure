#--------------------------------------------------------
# Author:      Zoh Que
# Created:     05-12-2023
#--------------------------------------------------------
import random
import os
import numpy as np


def seed_everything( seed ):
    random.seed(seed)
    os.environ['PYTHONHASHSEED'] = str(seed)
    np.random.seed(seed)
##    torch.manual_seed(seed)
##    torch.cuda.manual_seed(seed)
##    torch.backends.cudnn.deterministic = True

seed_everything( 2023 )

My=list("banana")
for w in My :
    print(f'w= "{w}", hash={hash(w)%100000:9}')
